//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface IBICScale
{
    double _multiple;
    long long _coreUIScale;
}

+ (id)identifierFromFileName:(id)arg1 inRange:(struct _NSRange *)arg2;
+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 multiple:(double)arg4 coreUIScale:(long long)arg5 displayOrder:(double)arg6 deprecated:(_Bool)arg7;
+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 multiple:(double)arg4 coreUIScale:(long long)arg5 displayOrder:(double)arg6;
+ (id)displayName;
+ (id)contentsJSONKey;
+ (id)unspecifiedValuePlaceholder;
+ (void)setComponentID:(long long)arg1;
+ (long long)componentID;
@property(readonly) long long coreUIScale; // @synthesize coreUIScale=_coreUIScale;
@property(readonly) double multiple; // @synthesize multiple=_multiple;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) long long coreUIValue;
- (_Bool)isEqualToSlotComponentCounterpartWithKnownEqualClass:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 multiple:(double)arg4 coreUIScale:(long long)arg5 displayOrder:(double)arg6 deprecated:(_Bool)arg7;
- (long long)componentID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

