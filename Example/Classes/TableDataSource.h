//
//  TableDataSource.h
//  PickerCells
//
//  Created by Danis Ziganshin on 21/07/15.
//  Copyright (c) 2015 Danis Ziganshin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>

- (instancetype)initWthTable:(UITableView *)tableView;

- (void)disableFirstPicker;

@end
