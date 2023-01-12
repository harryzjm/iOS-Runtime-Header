//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/NSObject-Protocol.h>

@class NSString;

@protocol SiriSharedUIReusableView <NSObject>
+ (NSString *)elementKind;
+ (NSString *)reuseIdentifier;
+ (double)defaultHeight;

@optional
- (struct UIEdgeInsets)edgeInsets;
@end

