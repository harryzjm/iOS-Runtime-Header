//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

@interface PXDiagnosticsItemProvider : NSObject
{
    NSMutableDictionary *__loadHandlers;
}

@property(readonly, nonatomic) NSMutableDictionary *_loadHandlers; // @synthesize _loadHandlers=__loadHandlers;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *registeredIdentifiers;
- (id)itemForIdentifier:(id)arg1;
- (_Bool)hasItemForIdentifier:(id)arg1;
- (void)registerItemForIdentifier:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end
