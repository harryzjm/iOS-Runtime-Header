//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface WDFieldMarker
{
    int mFieldPosition;
    int mMarkerType;
    unsigned char mFieldType;
    NSData *mData;
    unsigned int mZombieEmbed:1;
    unsigned int mResultDirty:1;
    unsigned int mResultEdited:1;
    unsigned int mLocked:1;
    unsigned int mPrivateResult:1;
    unsigned int mNested:1;
    unsigned int mHasSeparator:1;
}

- (void).cxx_destruct;
- (id)description;
- (void)setData:(id)arg1;
- (id)data;
- (void)setHasSeparator:(_Bool)arg1;
- (_Bool)hasSeparator;
- (void)setNested:(_Bool)arg1;
- (_Bool)nested;
- (void)setPrivateResult:(_Bool)arg1;
- (_Bool)privateResult;
- (void)setLocked:(_Bool)arg1;
- (_Bool)locked;
- (void)setResultEdited:(_Bool)arg1;
- (_Bool)resultEdited;
- (void)setResultDirty:(_Bool)arg1;
- (_Bool)resultDirty;
- (void)setZombieEmbed:(_Bool)arg1;
- (_Bool)zombieEmbed;
- (int)runType;
- (void)setFieldType:(unsigned char)arg1;
- (unsigned char)fieldType;
- (void)setFieldMarkerType:(int)arg1;
- (int)fieldMarkerType;
- (void)setFieldPosition:(int)arg1;
- (int)fieldPosition;
- (id)initWithParagraph:(id)arg1;

@end

