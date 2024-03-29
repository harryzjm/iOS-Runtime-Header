//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TSWPSmartField.h"

@class NSArray, NSString;

@interface TSWPBibliographySmartField : TSWPSmartField
{
    NSArray *_citationRecords;
    _Bool _isLocalizable;
}

+ (_Bool)isValidBibliographyField:(id)arg1;
- (void).cxx_destruct;
- (_Bool)allowsPasteAsSmartField;
- (id)citationSmartFields;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (unsigned short)smartFieldKind;
- (void)loadFromUnarchiver:(id)arg1;
@property(nonatomic) _Bool isLocalizable;
@property(copy, nonatomic) NSArray *citationRecords;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

