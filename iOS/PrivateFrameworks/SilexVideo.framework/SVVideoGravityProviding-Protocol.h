//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SilexVideo/NSObject-Protocol.h>

@class NSString;

@protocol SVVideoGravityProviding <NSObject>
@property(copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock;
@property(readonly, copy, nonatomic) NSString *landscapeVideoGravity;
@property(readonly, copy, nonatomic) NSString *portraitVideoGravity;
@property(readonly, copy, nonatomic) NSString *videoGravity;
@end
