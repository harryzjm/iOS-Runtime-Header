//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/UIEditingOverlayInteractionWithView-Protocol.h>

@class PKPaletteTapToRadarConfiguration;

@interface PKPaletteTapToRadarCommandExecution : NSObject <UIEditingOverlayInteractionWithView>
{
    PKPaletteTapToRadarConfiguration *_configuration;
}

+ (id)commandExecutionWithConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) PKPaletteTapToRadarConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect)arg1;
- (void)run;
- (id)initWithConfiguration:(id)arg1;

@end
