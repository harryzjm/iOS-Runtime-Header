//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TKTonePickerItem;

@interface TKToneClassicsPickerItem
{
    long long _classicToneIndex;
}

@property(nonatomic, setter=_setClassicToneIndex:) long long classicToneIndex; // @synthesize classicToneIndex=_classicToneIndex;
- (void)_appendDescriptionOfAttributesToString:(id)arg1;
- (id)childItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) TKTonePickerItem *parentItem;

@end
