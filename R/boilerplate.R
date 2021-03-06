sfc_boilerplate <- function(x, xlim, ylim, crs) {
  p4 <- NA_character_
  epss <- NA_integer_
  ## sf:::print.crs won't let us have a EPSG without p4
  ##if (is.integer(crs) || !is.na(as.integer(crs))) epss <- crs
  op <- options(warn = -1)
  if (is.integer(crs) || !is.na(as.integer(crs))) crs <- sprintf("+init=epsg:%i", crs)
  options(op)
  if (is.character(crs)) p4 <- crs
  crslist <- structure(list(epsg = epss, proj4string = p4), class = "crs")
  attr(x, "precision") <- 0
  attr(x, "bbox") <- structure(c(xmin = xlim[1], ymin = ylim[1],
                                 xmax = xlim[2], ymax = ylim[2]),
                               class = "bbox")

  attr(x, "crs") <- crslist
  attr(x, "n_empty") <- 0

  x
}

coordinated_warning <- function(pts, gdim) {
  if (ncol(pts) < 2) warning("simple features doesn't support fewer than 2 geometric dimensions")
  if (ncol(pts) == 2 && gdim != "XY") warning("simple features only supports XY in the first two dimensions")
  if (ncol(pts) > 4) warning("simple features doesn't support more than 4 geometric dimensions")
  if (nchar(gdim) != ncol(pts)) warning("number of dimension names does not match number of columns")
  if (!gdim %in% c("XY", "XYZ", "XYM", "XYZM")) warning("you are seriously outside Kansas now Toto ...")
  invisible(NULL)
}
