//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNCDAllContainersPredicate : CNPredicate
{
    _Bool _includeDisabledContainers;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool includeDisabledContainers; // @synthesize includeDisabledContainers=_includeDisabledContainers;
- (id)cn_persistenceFilterRequest;
- (id)cn_topLevelFilter;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncludeDisabledContainers:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

