//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileMailUI/EFLoggable-Protocol.h>

@class NSString;

@interface ContentItemMarkupGenerator : NSObject <EFLoggable>
{
}

+ (_Bool)isDisplayableSinglePagePDFContentItem:(id)arg1;
+ (_Bool)isDisplayableImageContentItem:(id)arg1;
+ (_Bool)isDisplayableInlineContentItem:(id)arg1;
+ (id)attachmentElementMarkupStringForContentItem:(id)arg1;
+ (id)markupStringForDisplayForContentItem:(id)arg1;
+ (id)log;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
