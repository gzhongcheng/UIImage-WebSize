//
//  UIImage+WebSize.h
//  FilmCrowdFunding
//
//  Created by ZhongCheng Guo on 2016/12/19.
//  Copyright © 2016年 ZhongCheng Guo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage(WebSize)

//根据图片链接获取图片的size
+(CGSize)getImageSizeWithURL:(id)imageURL;

//根据图片链接以及图片控件宽度进行等比例缩放获取图片的高度
+(float)getImageHeightWithUrl:(id)imageURL
                   imageWidth:(float)width;

@end
