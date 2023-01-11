//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>
#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSData, NSItemProvider, NSString, NSURL;

@interface WFSafariWebPage : NSObject <NSCopying, WFNaming, WFSerializableContent>
{
    NSURL *_URL;
    NSString *_pageTitle;
    NSString *_selectionText;
    NSData *_selectionHTML;
    NSData *_documentHTML;
    NSItemProvider *_itemProvider;
}

+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)webPageFromItemDictionary:(id)arg1;
+ (void)retrieveWebPageFromItemProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
@property(readonly, copy, nonatomic) NSData *documentHTML; // @synthesize documentHTML=_documentHTML;
@property(readonly, copy, nonatomic) NSData *selectionHTML; // @synthesize selectionHTML=_selectionHTML;
@property(readonly, copy, nonatomic) NSString *selectionText; // @synthesize selectionText=_selectionText;
@property(readonly, copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)wfSerializedRepresentation;
@property(readonly, copy, nonatomic) NSString *wfName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 selectionText:(id)arg3 selectionHTML:(id)arg4 documentHTML:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
