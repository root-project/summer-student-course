{

// We create and draw the histogram in the default canvas
TH1D h("myHist", "myTitle", 64, -4, 4);
h.FillRandom("gaus");
h.Draw();

}
