//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIFoundation/_NSAttributedStringIntentResolution-Protocol.h>

@class NSString;

@interface _NSAttributedStringIntentResolver : NSObject <_NSAttributedStringIntentResolution>
{
}

+ (id)fontAttributeValueForInlinePresentationIntent:(unsigned long long)arg1 suggestedBaseFont:(id)arg2 suggestingTheDefaultFont:(_Bool)arg3;
+ (id)fontAttributeValueForInlineIntent:(long long)arg1 suggestedBaseFont:(id)arg2 suggestingTheDefaultFont:(_Bool)arg3;
+ (void)_replaceInlinePresentationIntent:(id)arg1 get:(CDUnknownBlockType)arg2 set:(CDUnknownBlockType)arg3;
+ (void)_replaceInlinePresentationIntentInString:(id)arg1 range:(struct _NSRange)arg2 value:(id)arg3;
+ (id)attributesByResolvingIntentsInAttributes:(id)arg1;
+ (void)resolveAttributedString:(id)arg1 inRange:(struct _NSRange)arg2;
+ (id)attributedStringByResolvingString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
