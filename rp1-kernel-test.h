#pragma once

struct example_state {
  struct cdev *chardev;
  unsigned char __iomem *regs;
  struct device * dev;
  struct dma_chan *chan;
};
