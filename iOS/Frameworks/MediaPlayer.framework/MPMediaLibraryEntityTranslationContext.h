//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class MPMediaLibrary, MPModelKind, NSArray;

@interface MPMediaLibraryEntityTranslationContext : NSObject
{
    _Bool _multiQuery;
    MPMediaLibrary *_mediaLibrary;
    NSArray *_allowedItemIdentifiers;
    NSArray *_scopedContainers;
    unsigned long long _filteringOptions;
    MPModelKind *_modelKind;
}

@property(retain, nonatomic) MPModelKind *modelKind; // @synthesize modelKind=_modelKind;
@property(nonatomic) unsigned long long filteringOptions; // @synthesize filteringOptions=_filteringOptions;
@property(nonatomic, getter=isMultiQuery) _Bool multiQuery; // @synthesize multiQuery=_multiQuery;
@property(retain, nonatomic) NSArray *scopedContainers; // @synthesize scopedContainers=_scopedContainers;
@property(retain, nonatomic) NSArray *allowedItemIdentifiers; // @synthesize allowedItemIdentifiers=_allowedItemIdentifiers;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void).cxx_destruct;

@end
