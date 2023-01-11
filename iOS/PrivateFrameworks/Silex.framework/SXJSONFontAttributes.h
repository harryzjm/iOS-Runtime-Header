//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SXFontAttributes-Protocol.h>

@class NSString;

@interface SXJSONFontAttributes <SXFontAttributes>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (long long)styleWithValue:(id)arg1 withType:(int)arg2;
- (long long)widthWithValue:(id)arg1 withType:(int)arg2;
- (long long)weightWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSString *familyName; // @dynamic familyName;
@property(readonly, nonatomic) long long style; // @dynamic style;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long weight; // @dynamic weight;
@property(readonly, nonatomic) long long width; // @dynamic width;

@end
