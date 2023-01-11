//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssetExplorer/PXTileIdentifierConverter-Protocol.h>

@class NSString;
@protocol PXTileIdentifierConverter;

__attribute__((visibility("hidden")))
@interface AEDelegatingTileIdentifierConverter : NSObject <PXTileIdentifierConverter>
{
    id <PXTileIdentifierConverter> __wrappedConverter;
}

@property(readonly, nonatomic) id <PXTileIdentifierConverter> _wrappedConverter; // @synthesize _wrappedConverter=__wrappedConverter;
- (void).cxx_destruct;
- (_Bool)transformTileIdentifier:(struct PXTileIdentifier *)arg1 group:(unsigned long long *)arg2;
- (id)initWithWrappedConverter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

