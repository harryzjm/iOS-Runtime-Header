//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBDataString, _INPBIntentMetadata;

@protocol _INPBCreateTimerIntent <NSObject>
@property(readonly, nonatomic) _Bool hasLabel;
@property(retain, nonatomic) _INPBDataString *label;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) double duration;
@end

