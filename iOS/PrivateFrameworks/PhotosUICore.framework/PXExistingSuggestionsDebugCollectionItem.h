//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PHSuggestion;

@interface PXExistingSuggestionsDebugCollectionItem : NSObject
{
    NSString *_name;
    NSString *_description;
    PHSuggestion *_suggestion;
}

- (void).cxx_destruct;
@property(readonly) PHSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(readonly) NSString *description; // @synthesize description=_description;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)initWithSuggestion:(id)arg1;

@end
