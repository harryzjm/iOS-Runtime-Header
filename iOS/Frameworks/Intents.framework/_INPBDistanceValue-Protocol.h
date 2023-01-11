//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBValueMetadata;

@protocol _INPBDistanceValue <NSObject>
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(nonatomic) _Bool hasUnit;
@property(nonatomic) int unit;
@property(nonatomic) _Bool hasMagnitude;
@property(nonatomic) double magnitude;
- (int)StringAsUnit:(NSString *)arg1;
- (NSString *)unitAsString:(int)arg1;
@end

