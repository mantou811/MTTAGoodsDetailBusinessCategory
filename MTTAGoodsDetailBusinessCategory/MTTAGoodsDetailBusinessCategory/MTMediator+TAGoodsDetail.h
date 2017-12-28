//
//  CTMediator+TAGoodsDetail.h
//  TAGoodsDetailBusinessCategory
//
//  Created by Charon on 16/12/25.
//  Copyright © 2016年 Charon. All rights reserved.
//

#import <MTMediator/MTMediator.h>
#import <UIKit/UIKit.h>

@interface MTMediator (TAGoodsDetail)

- (UIViewController *)goodsDetailViewControllerWithGoodsId:(NSString *)goodsId goodsName:(NSString *)goodsName;

@end
