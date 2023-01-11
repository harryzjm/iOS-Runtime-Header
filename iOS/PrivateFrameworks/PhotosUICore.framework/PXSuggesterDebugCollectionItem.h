//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, PHSuggestion;

@interface PXSuggesterDebugCollectionItem : NSObject
{
    NSString *_name;
    NSString *_description;
    NSDictionary *_info;
    PHSuggestion *_suggestion;
    NSDate *_date;
}

@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) PHSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(readonly) NSDictionary *info; // @synthesize info=_info;
@property(readonly) NSString *description; // @synthesize description=_description;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly) _Bool isInvalid;
- (id)initWithSuggestion:(id)arg1 suggestionInfo:(id)arg2;

@end
