//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TSWPPlaceholderSmartField.h"

@interface TSWPFilenameSmartField : TSWPPlaceholderSmartField
{
    unsigned int _displayFlags;
}

- (unsigned short)smartFieldKind;
- (_Bool)allowsPasteAsSmartField;
- (id)copyWithContext:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
@property(nonatomic) unsigned int displayFlags;

@end

