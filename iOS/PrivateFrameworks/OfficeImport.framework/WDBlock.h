//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WDText;

__attribute__((visibility("hidden")))
@interface WDBlock : NSObject
{
    WDText *mText;
}

- (id)description;
- (void)clearProperties;
- (_Bool)isEmpty;
- (id)newRunIterator;
- (id)runIterator;
- (id)initWithText:(id)arg1;
- (id)init;
- (int)textType;
- (id)document;
- (id)text;
- (int)blockType;

@end
