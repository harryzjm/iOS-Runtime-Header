//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INSpeakableString;

@protocol INSearchForTimersIntentExport <NSObject, JSExport>
@property(nonatomic) long long state;
@property(nonatomic) double duration;
@property(copy, nonatomic) INSpeakableString *label;
- (id)init;
@end

