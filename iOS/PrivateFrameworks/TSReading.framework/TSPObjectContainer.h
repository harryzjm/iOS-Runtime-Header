//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface TSPObjectContainer
{
    unsigned char _packageIdentifier;
    NSArray *_childObjects;
}

+ (long long)objectIdentifierForPackageIdentifier:(unsigned char)arg1;
- (void).cxx_destruct;
- (void)prepareForComponentWriteWithDelayedObjects:(id)arg1;
- (unsigned int)delayedArchivingPriority;
- (_Bool)shouldDelayArchiving;
- (id)packageLocator;
- (long long)tsp_identifier;
- (id)initWithContext:(id)arg1 packageIdentifier:(unsigned char)arg2;
- (id)initWithContext:(id)arg1;

@end

