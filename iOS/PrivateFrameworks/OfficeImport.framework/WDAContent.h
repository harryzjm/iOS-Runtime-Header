//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/OADClient-Protocol.h>
#import <OfficeImport/OADLinkedTextClient-Protocol.h>
#import <OfficeImport/OADTextClient-Protocol.h>

@class NSString, OADDrawable, WDAAnchor, WDATextBox;

__attribute__((visibility("hidden")))
@interface WDAContent : NSObject <OADClient, OADTextClient, OADLinkedTextClient>
{
    WDAAnchor *mAnchor;
    WDATextBox *mTextBox;
    OADDrawable *mDrawable;
    int mTextType;
}

+ (Class)classForType:(unsigned short)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) WDAAnchor *anchor; // @synthesize anchor=mAnchor;
@property __weak OADDrawable *drawable; // @synthesize drawable=mDrawable;
@property(readonly, copy) NSString *description;
- (_Bool)hasText;
- (_Bool)isLinked;
- (unsigned long long)linkedTextBoxSupport;
- (_Bool)floating;
- (void)setTextType:(int)arg1;
- (int)textType;
- (_Bool)isTopLevelObject;
- (_Bool)isLine;
- (_Bool)isShape;
- (void)setTextBox:(id)arg1 document:(id)arg2;
- (id)textBox;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (_Bool)hasBounds;
- (id)createTextBoxWithDocument:(id)arg1 textType:(int)arg2;
- (void)clearAnchor;
- (id)createAnchor;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
