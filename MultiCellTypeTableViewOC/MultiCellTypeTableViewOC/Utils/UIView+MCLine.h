//
//  UIView+MCLine.h
//  MultiCellTypeTableViewOC
//
//  Created by Baitianyu on 8/25/16.
//  Copyright © 2016 Baitianyu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (MCLine)

/// Add bottom one pixel line for view.
- (UIView *)mc_addBottomLineWithLeftMargin:(CGFloat)leftMargin rightMargin:(CGFloat)rightMargin;

@end
