//
//  LMMusicCell.h
//  音乐播放器
//
//  Created by 张焕 on 12/31/15.
//  Copyright © 2015 张焕. All rights reserved.
//

#import <UIKit/UIKit.h>
@class LMMusic;
@interface LMMusicCell : UITableViewCell
+(instancetype) musicCellWithTableView:(UITableView*)tableView;

@property(strong, nonatomic)LMMusic *music;
@end

