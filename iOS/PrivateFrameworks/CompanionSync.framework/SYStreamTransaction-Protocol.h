//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CompanionSync/NSObject-Protocol.h>

@class NSDictionary, NSProgress;

@protocol SYStreamTransaction <NSObject>
@property(readonly, nonatomic) NSProgress *progress;
@property(readonly, nonatomic) NSDictionary *metadata;
@property(readonly, nonatomic) long long type;
@end

