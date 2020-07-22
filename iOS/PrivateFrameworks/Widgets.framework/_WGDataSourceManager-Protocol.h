//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Widgets/NSObject-Protocol.h>

@class NSArray;
@protocol _WGParentDataSourceManager;

@protocol _WGDataSourceManager <NSObject>
@property(readonly, nonatomic) NSArray *dataSources;
@property(nonatomic) id <_WGParentDataSourceManager> parentDataSourceManager;
- (void)_stop:(void (^)(void))arg1;
- (void)_start:(void (^)(void))arg1;
@end

