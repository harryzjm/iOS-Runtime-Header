//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorResultsAudio : NSObject
{
    unsigned int _remoteSSRC;
    unsigned int _audioUnitModel;
    _Bool _allowRecording;
    _Bool _allowSwitching;
    int _primaryPayload;
    int _dtxPayload;
    int _redPayload;
    NSMutableSet *_secondaryPayloads;
    _Bool _useSBR;
}

@property(nonatomic) _Bool useSBR; // @synthesize useSBR=_useSBR;
@property(nonatomic) unsigned int remoteSSRC; // @synthesize remoteSSRC=_remoteSSRC;
@property(nonatomic) _Bool allowSwitching; // @synthesize allowSwitching=_allowSwitching;
@property(nonatomic) unsigned int audioUnitModel; // @synthesize audioUnitModel=_audioUnitModel;
@property(nonatomic) _Bool allowRecording; // @synthesize allowRecording=_allowRecording;
@property(nonatomic) int redPayload; // @synthesize redPayload=_redPayload;
@property(nonatomic) int dtxPayload; // @synthesize dtxPayload=_dtxPayload;
@property(nonatomic) int primaryPayload; // @synthesize primaryPayload=_primaryPayload;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (void)addSecondaryPayload:(int)arg1;
@property(readonly, nonatomic) NSArray *secondaryPayloads;
- (id)init;

@end

