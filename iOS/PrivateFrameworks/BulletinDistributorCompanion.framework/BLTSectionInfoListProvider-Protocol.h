//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class NSString;
@protocol BLTSectionInfoListProviderDelegate;

@protocol BLTSectionInfoListProvider <NSObject>
@property(nonatomic) __weak id <BLTSectionInfoListProviderDelegate> delegate;
- (void)reloadWithCompletion:(void (^)(NSDictionary *))arg1;

@optional
- (void)reloadSection:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
@end

