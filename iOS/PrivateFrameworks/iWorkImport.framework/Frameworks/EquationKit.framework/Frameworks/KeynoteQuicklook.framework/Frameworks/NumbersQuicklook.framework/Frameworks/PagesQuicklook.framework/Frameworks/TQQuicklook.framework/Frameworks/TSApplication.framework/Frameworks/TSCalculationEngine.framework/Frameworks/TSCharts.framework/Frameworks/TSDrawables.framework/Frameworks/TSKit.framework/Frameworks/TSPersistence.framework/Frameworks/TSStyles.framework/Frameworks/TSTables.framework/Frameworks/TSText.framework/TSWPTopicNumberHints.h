//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSText/TSWPTopicNumberHints-Protocol.h>

@class NSMapTable, NSString;

@interface TSWPTopicNumberHints : NSObject <TSWPTopicNumberHints>
{
    NSMapTable *_entryForListStyle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *entryForListStyle; // @synthesize entryForListStyle=_entryForListStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
