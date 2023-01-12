//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IFGraphicSymbolDescriptor, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface ISGraphicSymbolResource : NSObject
{
    IFGraphicSymbolDescriptor *_descriptor;
    NSURL *_url;
    NSString *_symbolName;
}

+ (id)graphicSymbolResourceWithRecipe:(id)arg1 url:(id)arg2;
- (void).cxx_destruct;
@property(readonly) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(readonly) NSURL *url; // @synthesize url=_url;
@property(retain) IFGraphicSymbolDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void)updateDescriptorWithImageDescriptor:(id)arg1;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)initWithGraphicSymbolDescriptor:(id)arg1 symbolName:(id)arg2 url:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

