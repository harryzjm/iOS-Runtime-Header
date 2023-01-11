//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaLibrary, MPModelKind, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MPMediaLibraryEntityTranslationContext : NSObject
{
    _Bool _multiQuery;
    MPMediaLibrary *_mediaLibrary;
    NSArray *_allowedEntityIdentifiers;
    NSArray *_scopedContainers;
    unsigned long long _filteringOptions;
    MPModelKind *_modelKind;
    NSString *_personID;
    NSString *_filterText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *filterText; // @synthesize filterText=_filterText;
@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(retain, nonatomic) MPModelKind *modelKind; // @synthesize modelKind=_modelKind;
@property(nonatomic) unsigned long long filteringOptions; // @synthesize filteringOptions=_filteringOptions;
@property(nonatomic, getter=isMultiQuery) _Bool multiQuery; // @synthesize multiQuery=_multiQuery;
@property(retain, nonatomic) NSArray *scopedContainers; // @synthesize scopedContainers=_scopedContainers;
@property(retain, nonatomic) NSArray *allowedEntityIdentifiers; // @synthesize allowedEntityIdentifiers=_allowedEntityIdentifiers;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;

@end
