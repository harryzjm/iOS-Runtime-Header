//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface CKAttributedStringItemProvider : NSObject
{
    NSAttributedString *_attributedString;
}

+ (id)writableTypeIdentifiersForItemProvider;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
- (id)initWithAttributedString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

