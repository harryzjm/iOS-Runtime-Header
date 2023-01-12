//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol CKPickerBarView <NSObject>
@property(copy, nonatomic) NSArray *acknowledgmentViews;
- (void)performCancelAnimation:(void (^)(void))arg1;
- (void)performSendAnimation:(void (^)(void))arg1;
- (void)performSelectedAnimation:(void (^)(void))arg1;
- (void)performShowAnimation:(void (^)(void))arg1;
- (id)initWithGroupCounts:(NSDictionary *)arg1 selectedType:(long long)arg2 orientation:(BOOL)arg3 serviceName:(NSString *)arg4;

@optional
- (void)setAnchorVerticalOrientation:(BOOL)arg1;
@end

