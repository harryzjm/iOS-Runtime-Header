//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol INHomeEntityExport <NSObject, JSExport>
@property(nonatomic) long long deviceType;
@property(nonatomic) long long type;
@property(copy, nonatomic) NSString *name;
- (id)init;
@end
