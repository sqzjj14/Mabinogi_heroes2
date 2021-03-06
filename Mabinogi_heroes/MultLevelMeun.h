//
//  MultLevelMeun.h
//  Mabinogi_heroes
//
//  Created by gang liu on 16/3/23.
//  Copyright © 2016年 baiyue. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MultLevelMeun : UIView<UITableViewDelegate,UITableViewDataSource,UICollectionViewDataSource,UICollectionViewDelegate,UICollectionViewDelegateFlowLayout>

@property(nonatomic,readonly)NSArray *dataSource;
@property(nonatomic,assign)NSInteger selectIndex;
@property(nonatomic,assign)NSInteger selectIndex_right;
@property(nonatomic,copy) id block ;
@property(assign,nonatomic) NSInteger needToScorllerIndex;
@property(nonatomic,copy) NSString* type;

-(id)initWithFrame:(CGRect)frame WithLeftData:(NSArray*)allData withType:(NSString*)type withSelecetIndex:(void(^)(NSInteger left,NSInteger right,id info))selectIndexBlock;
@end
