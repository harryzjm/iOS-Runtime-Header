//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MFComposeRecipientGroup
{
    NSArray *_children;
}

- (id)childrenWithCompleteMatches;
- (id)completelyMatchedAttributedStrings;
- (_Bool)wasCompleteMatch;
- (_Bool)isEqual:(id)arg1;
- (id)commentedAddress;
- (id)address;
- (int)recordID;
- (void *)record;
- (int)property;
- (_Bool)isRemovableFromSearchResults;
- (_Bool)isGroup;
- (id)sortedChildren;
- (void)_populateSortedChildren;
- (id)children;
- (id)unlocalizedLabel;
- (id)placeholderName;
- (id)compositeName;
- (id)label;
- (id)displayString;
- (id)initWithChildren:(id)arg1 displayString:(id)arg2;
- (void)dealloc;

@end

