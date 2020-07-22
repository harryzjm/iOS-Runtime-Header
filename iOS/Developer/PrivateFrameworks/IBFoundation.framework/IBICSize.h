//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IBFoundation/NSCopying-Protocol.h>

@interface IBICSize <NSCopying>
{
    struct CGSize _pointSize;
}

+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 pointSize:(struct CGSize)arg4 displayOrder:(double)arg5;
+ (id)displayName;
+ (id)contentsJSONKey;
+ (id)unspecifiedValuePlaceholder;
+ (void)setComponentID:(long long)arg1;
+ (long long)componentID;
@property(readonly) struct CGSize pointSize; // @synthesize pointSize=_pointSize;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToSlotComponentCounterpartWithKnownEqualClass:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 pointSize:(struct CGSize)arg4 displayOrder:(double)arg5;
- (long long)componentID;

@end

