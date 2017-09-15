//
//  ViewController.h
//  Quadcopter Controller
//
//  Created by Yongyang Nie on 3/4/17.
//  Copyright © 2017 Yongyang Nie. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "BLEManager.h"

@interface ViewController : UIViewController <BLEManagerDelegate>

@property CGPoint leftPosition;
@property CGPoint rightPosition;

@property (strong, nonatomic) BLEManager *manager;
@property (weak, nonatomic) IBOutlet UIImageView *leftBase;
@property (weak, nonatomic) IBOutlet UIImageView *rightBase;
@property (weak, nonatomic) IBOutlet UIView *leftStick;
@property (weak, nonatomic) IBOutlet UIView *rightStick;
@property (weak, nonatomic) IBOutlet UILabel *battery;
@property (weak, nonatomic) IBOutlet UILabel *speed;
@property (weak, nonatomic) IBOutlet UILabel *altitude;

@end

