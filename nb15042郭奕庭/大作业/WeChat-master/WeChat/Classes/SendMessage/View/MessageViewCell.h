//
//  QQMessageViewCell.h
//  QQ
//
//  Created by greeting on 15/9/16.
//  Copyright (c) 2015年 greeting. All rights reserved.
//

#import <UIKit/UIKit.h>
@class MessageFrameModel;

@interface MessageViewCell : UITableViewCell

+(instancetype)messageCellWithTableView:(UITableView *)tableView;

/** frame的模型*/
@property (nonatomic,strong) MessageFrameModel *frameMessage;
@property (nonatomic,weak) XMPPJID *OtherJid;

@end
