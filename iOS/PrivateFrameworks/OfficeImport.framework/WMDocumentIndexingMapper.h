//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WMDocumentIndexingMapper
{
}

- (void)mapWithState:(id)arg1;
- (void)_indexText:(id)arg1 intoString:(id)arg2;
- (void)_indexTable:(id)arg1 intoString:(id)arg2;
- (void)_indexBlock:(id)arg1 intoString:(id)arg2;

// Remaining properties
@property(readonly) WDDocument *document; // @dynamic document;

@end

