//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSWPStorage;

@protocol TSWPStorageActionObjectProtocol

@optional
- (void)updateForStyleChangeToStorage:(TSWPStorage *)arg1 charIndex:(unsigned long long)arg2;
- (_Bool)needsUpdateForStyleChangeToStorage:(TSWPStorage *)arg1 charIndex:(unsigned long long)arg2;
- (_Bool)shouldInvalidateWhenTextPropertiesChange;
@end
