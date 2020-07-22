//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSAttributedString.h>

#import <Home/HFStringGenerator-Protocol.h>

@class NSString;

@interface NSAttributedString (HFAdditions) <HFStringGenerator>
- (id)_synthesizeAttributedSubstringFromRange:(struct _NSRange)arg1 usingDefaultAttributes:(id)arg2;
- (_Bool)prefersDynamicString;
- (id)stringWithAttributes:(id)arg1;
- (id)dynamicStringForSize:(struct CGSize)arg1 attributes:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

