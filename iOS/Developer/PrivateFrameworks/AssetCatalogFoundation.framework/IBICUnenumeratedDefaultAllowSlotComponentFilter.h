//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBICSlotComponent;

@interface IBICUnenumeratedDefaultAllowSlotComponentFilter
{
    IBICSlotComponent *_includedUnspecifiedValuePlaceholder;
}

- (void).cxx_destruct;
- (_Bool)matchesComponent:(id)arg1;
- (id)matchingComponents;
- (id)initWithSlotComponentClass:(Class)arg1 matchingInstances:(id)arg2;
- (id)initWithSlotComponentClass:(Class)arg1 includeUnspecifiedValuePlaceholder:(_Bool)arg2;

@end

