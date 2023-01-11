//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MFAddressPickerReformatter : NSObject
{
    NSArray *_addresses;
    NSArray *_reformattedAddresses;
    double _maximumWidth;
    double _minimumFontSize;
    double _maximumFontSize;
    double _fontSize;
    _Bool _attributesDisabled;
}

- (void).cxx_destruct;
- (void)_restoreMiddleTruncationRanges:(id)arg1;
- (id)_saveMiddleTruncationRanges;
- (_Bool)_reformattedAddressesByDisplayedStringsAreUnique:(id)arg1;
- (void)_expandAllLocalParts;
- (id)_reformattedAddressesByDisplayedStrings;
- (_Bool)_attemptUniquingDisplayedStringsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_attemptUniquingDisplayedStrings;
- (void)_truncateIdenticalLocalPartsWithDifferentDomainPartsWithTailLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)_truncateIdenticalLocalPartsWithDifferentDomainParts;
- (void)_determineFontSize:(_Bool *)arg1;
- (void)_updateReformattedAddressesIfNecessary;
- (void)_invalidateReformattedAddresses;
- (unsigned long long)_defaultOptions;
- (id)reformattedAddressStringAtIndex:(unsigned long long)arg1;
- (id)reformattedAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfReformattedAddresses;
- (void)setMinimumFontSize:(double)arg1 maximumFontSize:(double)arg2;
- (void)setFontSize:(double)arg1;
- (void)setAttributesDisabled:(_Bool)arg1;
- (void)setMaximumWidth:(double)arg1;
- (void)setAddresses:(id)arg1;

@end
