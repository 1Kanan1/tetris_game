project('tetris', 'c',
  version: '0.1.0',
  default_options: [
    'c_std=c23',
    'warning_level=3'
  ]
)

env = get_option('environment')

tetris = executable('tetris', 'src/main.c',
  dependencies: [
    dependency('sdl3'),
    # dependency('sdl3_image'),
  ],
  c_args: '-D' + env.to_upper() # allows to use DEV, TEST, and PROD in if-statement
)

if env == 'test' # meson setup build -Denvironment=test --reconfigure
  test('basic_run', tetris)
endif
