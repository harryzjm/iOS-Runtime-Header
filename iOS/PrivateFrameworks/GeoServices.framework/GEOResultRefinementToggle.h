//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDResultRefinementMetadata, NSNumber, NSString;

@interface GEOResultRefinementToggle : NSObject
{
    _Bool _isSelected;
    _Bool _selectionFromView;
    _Bool _showAsSelected;
    int _evChargingConnectorType;
    NSString *_displayName;
    GEOPDResultRefinementMetadata *_metadata;
    unsigned long long _toggleType;
    NSNumber *_selectionSequenceNumber;
    NSString *_refinementKey;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showAsSelected; // @synthesize showAsSelected=_showAsSelected;
@property(readonly, nonatomic) NSString *refinementKey; // @synthesize refinementKey=_refinementKey;
@property(readonly, nonatomic) _Bool selectionFromView; // @synthesize selectionFromView=_selectionFromView;
@property(readonly, nonatomic) NSNumber *selectionSequenceNumber; // @synthesize selectionSequenceNumber=_selectionSequenceNumber;
@property(readonly, nonatomic) int evChargingConnectorType; // @synthesize evChargingConnectorType=_evChargingConnectorType;
@property(readonly, nonatomic) unsigned long long toggleType; // @synthesize toggleType=_toggleType;
@property(retain, nonatomic) GEOPDResultRefinementMetadata *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)convertToGEOPDResultRefinementToggle;
- (id)initWithResultRefinementToggle:(id)arg1;
- (id)initWithDisplayName:(id)arg1 isSelected:(_Bool)arg2 metadata:(id)arg3 toggleType:(unsigned long long)arg4 evChargingConnectorType:(int)arg5 selectionSequenceNumber:(id)arg6 selectionFromView:(_Bool)arg7 refinementKey:(id)arg8 showAsSelected:(_Bool)arg9;

@end
